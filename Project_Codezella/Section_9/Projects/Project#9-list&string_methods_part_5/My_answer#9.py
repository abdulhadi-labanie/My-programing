word = input("Enter a word: ")
print('-'*40)
word_ls = list(word)
word_ls.reverse()

pr_word = ''.join(word_ls)
print(pr_word)