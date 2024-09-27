var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift()

for (let i = 0; i < qtd; i++) {
    let linha = lines.shift()
    let temp = ""
    let sum = 0
    for (let i = 0; i < 14; i++) {
        if(!isNaN(linha[i])){
            temp += linha[i]
        } else {
            if(temp.length > 0){
               sum += Number(temp)
               temp = ""
            }
        }

    }
    console.log(sum);

}