create table watestaf
(
wtessdat    char(8),
wtesusid    char(10),
wtesdate    char(8),
wtestime    char(8),
wtesspar    char(30),
lf          char(1)
);
create unique index watesta1 on watestaf
(
wtessdat
);
revoke all on watestaf from public ; 
grant select on watestaf to public ; 
