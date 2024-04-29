console.log("Niubi mayor")
let a = 10
interface resp {
    status: number,
    message: string
    data: any
}
const fetchData = async (url: string): Promise<resp> => {
    return Promise.resolve({
        status: 1,
        message: "string",
        data: "any"
    })

}