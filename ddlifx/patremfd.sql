create table patremdf
(
dremadmn    char(8),
remlstl     char(3),
remldte     char(8),
rempdte     char(8),
remhflg     decimal(1,0),
remspar     char(21),
lf          char(1)
);
create unique index patremd1 on patremdf
(
dremadmn
);
revoke all on patremdf from public ; 
grant select on patremdf to public ; 
