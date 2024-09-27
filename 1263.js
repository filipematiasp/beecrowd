var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

while (lines.length > 1) {

    let frase = lines.shift()
    let arrayFrase = frase.split(' ')

    let qtd = 0
    for (let i = 0; i < arrayFrase.length; i++) {
        if(i > 1){
            if(
                arrayFrase[i + 1] &&
                (arrayFrase[i].substring(0,1).toLowerCase() === arrayFrase[i+1].substring(0,1).toLowerCase()) &&
                (arrayFrase[i].substring(0,1).toLowerCase() != arrayFrase[i-1].substring(0,1).toLowerCase())
            ){
               qtd++
            }
        } else {
            if(
                arrayFrase[i + 1] &&
                (arrayFrase[i].substring(0,1).toLowerCase() === arrayFrase[i+1].substring(0,1).toLowerCase())
            ){
                qtd++
            }
        }

    }
    console.log(qtd);
}