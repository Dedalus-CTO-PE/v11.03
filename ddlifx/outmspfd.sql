create table outmspaf
(
otmssite    char(6),
otmsclin    char(6),
otmsdowk    char(1),
otmsstim    char(8),
otmssusp    char(3),
otmsfdat    char(8),
otmstdat    char(8),
otmsreas    char(3),
otmsedat    char(8),
otmsetim    char(8),
otmseuid    char(10),
otmsrfdt    char(8),
otmsrtdt    char(8),
otmspare    char(50),
lf          char(1)
);
create unique index outmspa1 on outmspaf
(
otmssite,
otmsclin,
otmsdowk,
otmssusp,
otmsfdat
);
create unique index outmspa2 on outmspaf
(
otmssite,
otmsfdat,
otmsclin,
otmsdowk,
otmssusp
);
revoke all on outmspaf from public ; 
grant select on outmspaf to public ; 
