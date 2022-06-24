class Multiset(object):
    def __init__(self):
        self._collection = {}

    def add(self, value):
        if value in self._collection:
            self._collection[value] += 1
        else:
            self._collection[value] = 1

    def collection(self):
        return self._collection


q = int(input())
queries = []
for i in range(q):
    queries.append(list(map(int, input().split())))

mset = Multiset()
for query in queries:
    if query[0] == 1:
        mset.add(query[1])
    elif query[0] == 2:
        #TODO
    elif query[0] == 3:
        #TODO
