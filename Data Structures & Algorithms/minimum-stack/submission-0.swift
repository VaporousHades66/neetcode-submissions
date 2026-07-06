class MinStack {

    private var stack: [(val: Int, min: Int)]

    init() {
        self.stack = []

    }

    func push(_ val: Int) {
        if let lastElement = stack.last{
            let currentMin = min(val, lastElement.min)
            stack.append((val: val, min: currentMin))
        }
        else{
            stack.append((val: val, min: val))
        }

        

    }

    func pop() {
        stack.removeLast()

    }

    func top() -> Int {
        if let lastElement = stack.last{
            return lastElement.val 
        }
        return 0
    }

    func getMin() -> Int {
        if let lastElement = stack.last{
            return lastElement.min
        }
       return 0
    }
}
