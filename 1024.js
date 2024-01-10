var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift();

for (let i = 0; i < qtd; i++) {
    let input = lines.shift()
    
    let arrayCodify = transformInAscii(input)

    //first step
    arrayCodify.forEach((item, index)=> {
        if( (65 <= item && item <= 90) || (97 <= item && item <= 122)  ){
            arrayCodify[index] = item + 3
        }
    }) 

    //second step
    let reversed = arrayCodify.reverse()

    //third step
    let divide = Math.floor((reversed.length) / 2 )

    for (let i = divide; i < reversed.length; i++) {
        reversed[i] = reversed[i] - 1;        
    }

    asciiToCaracter(reversed)
}


function transformInAscii(arrayInput){
    let arrayCode = [];

    for (let i = 0; i < arrayInput.length; i++) {
        arrayCode.push(arrayInput[i].charCodeAt())      
    }

    return arrayCode;
}

function asciiToCaracter(arrayCodificated){
    console.log(String.fromCharCode.apply(null, arrayCodificated));
    
}