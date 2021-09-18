// let i=parseInt('2');// parseInt makes string to number 
// let j=+'kdjdsf';//+ makes any string to number also
// console.log(typeof i);
// console.log(typeof j);

let a={
    name:'ripon',
    roll:1
}

let j=JSON.stringify(a);

console.log(typeof a,a);

console.log(typeof j,j);

console.log(typeof JSON.parse(j),JSON.parse(j));
console.log(typeof JSON.parse(a));


