create table acclodaf
(
acloaccn    char(20),
aclostat    char(1),
aclosdat    char(8),
aclourno    char(8),
acloudat    char(8),
acloutim    char(8),
aclowuid    char(10),
aclospar    char(16),
lf          char(1)
);
create unique index accloda1 on acclodaf
(
acloaccn
);
create unique index accloda2 on acclodaf
(
aclourno,
acloaccn
);
revoke all on acclodaf from public ; 
grant select on acclodaf to public ; 
