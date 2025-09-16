create table sinsomaf
(
siomsid     char(3),
siomdes     char(40),
siomorg     char(3),
siomdel     char(1),
siommes     char(3),
siomper     decimal(5,2),
siomwar     char(5),
siominc     decimal(1,0),
siomfco     char(6),
siomtco     char(6),
siomfpg     char(5),
siomtpg     char(5),
siomfsu     char(5),
siomtsu     char(5),
siomuid     char(4),
siompor     char(2),
siomtim     char(8),
siomdat     char(8),
siomsoq     char(1),
siomfia     char(3),
siomtia     char(3),
siommdp     char(3),
siomspa     char(17),
lf          char(1)
);
create unique index sinsoma1 on sinsomaf
(
siomsid
);
revoke all on sinsomaf from public ; 
grant select on sinsomaf to public ; 
