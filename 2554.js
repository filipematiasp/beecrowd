var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let result = []
while (lines.length > 1) {

    let entradas = lines.shift().split(' ')
    let controller = false

    for (let i = 0; i < entradas[1]; i++) {
        let eachLine = lines.shift().split(' ');

        dataTemp = eachLine.shift();
        if(eachLine.every(item => item === '1') && !controller){
            controller = true
            result.push(dataTemp)
        }
    }

    if(!controller){
        result.push('Pizza antes de FdI')
    }

}    

result.forEach(item => console.log(item))