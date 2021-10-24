function nonrepeatingCharacter(s) {
    // code here
    let nonrepeatedchar = []
    let count = {}
    for (const char of s) {
        if (count[char]) {
            count[char] += 1
        } else {
            count[char] = 1
        }
    }
    for (const key in count) {
        if (count[key] == 1) {
            nonrepeatedchar.push(key)
        }
    }

    if (nonrepeatedchar.length === 0) {
        return '$'
    } else {
        return nonrepeatedchar[0]
    }

}
//console.log(nonrepeatingCharacter('hello'))