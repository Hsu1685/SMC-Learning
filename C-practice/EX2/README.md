轉換.sm檔為.dot文件
java -jar Smc.jar -graph -glevel 2 AppClass.sm
java -jar Smc.jar -graph -glevel 2 BatteryCooling_ES80.sm

生成狀態機代碼
java -jar Smc.jar -c AppClass.sm
java -jar Smc.jar -c BatteryCooling_ES80.sm