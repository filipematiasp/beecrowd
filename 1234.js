var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


function setCharAt(str,idx,newChr){ 
    return str.substring(0,idx) + newChr + str.substring(idx+1);
}

while (lines.length > 0) {
    let string = lines.shift()

    let upCase = false
    let firstLetterUpCase = true
    for (let i = 0; i < string.length; i++) {
        if(string[i] >= 'a' && string[i] <= 'z'){
            if(firstLetterUpCase){
                firstLetterUpCase = false
                upCase = false
                string = setCharAt(string, i, String.fromCharCode( string[i].charCodeAt() - 32))
                continue;
            }
            if(upCase && !firstLetterUpCase){
                upCase = false
                string = setCharAt(string, i, String.fromCharCode( string[i].charCodeAt() - 32))
                continue;
            }
            if(!upCase && !firstLetterUpCase){
                upCase = true;
                continue;
            }
        }

        if(string[i] >= 'A' && string[i] <= 'Z'){
             if(firstLetterUpCase){
                firstLetterUpCase = false
                continue;
            }
            if(!upCase && !firstLetterUpCase){
                upCase = true
                string = setCharAt(string, i, String.fromCharCode( string[i].charCodeAt() + 32))
                continue;
            }
            if(upCase && !firstLetterUpCase){
                upCase = false;
                continue;
            }
        }

    }

    console.log(string);
}    