create table bokstaaf
(
bstype      char(3),
bsdate      char(6),
bsbooks     decimal(6,0),
bsadmts     decimal(6,0),
bsdelvy     decimal(6,0),
bsundlv     decimal(6,0),
bscancb     decimal(6,0),
bscancp     decimal(6,0),
bsdschs     decimal(6,0),
bslock      char(2),
bsdepos     decimal(6,0),
bsspare     char(20),
lf          char(1)
);
create unique index bokbsta1 on bokstaaf
(
bstype,
bsdate
);
revoke all on bokstaaf from public ; 
grant select on bokstaaf to public ; 
