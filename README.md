#github练习仓库#
##目的##
1. 练习github的使用
2. 建立**本地仓库**
3. 同步远程仓库

##操作过程
1. 先在github网站上面建立仓库GitHubRepository
2. 然后在本地建立仓库``mkdir GitHubRepository``
3. 然后就是建立README.md文件，编辑
4. 再同步远程仓库
#
	echo "# GitHubRepository" >> README.md
	git init
	git add README.md
	git commit -m "first commit"
	git remote add origin https://github.com/jiangdm93/GitHubRepository.git
	git push -u origin master