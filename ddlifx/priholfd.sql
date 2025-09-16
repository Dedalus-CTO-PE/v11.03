create table priholdf
(
prhodebt    char(8),
dprhoscn    char(2),
prhohold    decimal(1,0),
prhospar    char(40),
lf          char(1)
);
create unique index prihola1 on priholdf
(
prhodebt,
dprhoscn
);
revoke all on priholdf from public ; 
grant select on priholdf to public ; 
