function minimumNumber(n, password) {
    // Return the minimum number of characters to make the password strong
    const numberRegx = /[0-9]/
    const lowerCaseRegx = /[a-z]/
    const upperCaseRegx = /[A-Z]/
    const specialRegx = /[\!\@\#\$\%\^\&\*\(\)\-\+]/
    let ret = 0;
    [numberRegx,lowerCaseRegx,upperCaseRegx,specialRegx].forEach(regex=>{
        if(!regex.test(password)){
            ret ++
        }
    })
    if(n+ret < 6){
        const gap = 6 - n
       return gap >= ret ? gap : ret - gap
    }
    return ret
}
console.log(minimumNumber(7,'AUzs-nV'))