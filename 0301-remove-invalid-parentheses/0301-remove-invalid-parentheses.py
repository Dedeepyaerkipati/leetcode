class Solution:
    def removeInvalidParentheses(self,s):
        def valid(x):
            b=0
            for c in x:
                if c=='(':
                    b+=1
                elif c==')':
                    b-=1
                    if b<0:
                        return False
            return b==0

        q={s}

        while q:
            ans=[x for x in q if valid(x)]

            if ans:
                return ans

            nq=set()

            for x in q:
                for i in range(len(x)):
                    if x[i]=='(' or x[i]==')':
                        nq.add(x[:i]+x[i+1:])

            q=nq