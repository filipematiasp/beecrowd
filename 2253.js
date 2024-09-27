var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

while (lines.length >= 1) {
    let entradas = lines.shift()

    let sizeMin = entradas.length >= 6 ? true : false
    let sizeMax = entradas.length <= 32 ? true : false
    let letrasMinusculas = entradas.match(/[a-z]/g)
    let letrasMaiusculas = entradas.match(/[A-Z]/g)
    let numeros = entradas.match(/[0-9]/g)
    let caracteresEspeciais = entradas.match(/[^a-zA-Z0-9]/g)

    if(
        sizeMin &&
        sizeMax &&
        letrasMinusculas &&
        letrasMaiusculas &&
        numeros &&
        !caracteresEspeciais
    ) {
        console.log('Senha valida.');
    } else {
        console.log('Senha invalida.');
    }

}