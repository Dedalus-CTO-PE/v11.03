create table bokunqaf
(
bkunvisn    char(8),
bkununiq    char(10),
bkunladm    char(8),
bkunwebl    char(10),
bkundatl    char(8),
bkuntiml    char(8),
bkunspar    char(70),
lf          char(1)
);
create unique index bokunqa1 on bokunqaf
(
bkunvisn,
bkununiq
);
revoke all on bokunqaf from public ; 
grant select on bokunqaf to public ; 
