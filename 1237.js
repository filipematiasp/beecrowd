var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

while (lines.length > 1) {
    let entradas1 = lines.shift()
    let entradas2 = lines.shift()

    let sum = 0
    let max = 0
    let key = false
    let pos2 = ''
    for(let i = 0; i < entradas1.length; i++){
        let pos1 = i
        for(let j = 0; j < entradas2.length; j++){
            if(entradas1[pos1] && entradas1[pos1] === entradas2[j]){
                if(!key){
                    pos2 = j
                }
                key = true
                pos1++
                sum += 1
                if(sum > max){
                    max = sum
                }
            } else {
                pos1 = i
                if(key){
                    j = pos2
                    key = false
                    sum = 0
                }
            }
        }
    }
    console.log(max);
}