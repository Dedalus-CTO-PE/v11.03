create table patchxaf
(
dptchadm    char(8),
ptchdate    char(8),
ptchtime    char(8),
ptchcode    char(9),
ptchspar    char(16),
lf          char(1)
);
create unique index patchxa1 on patchxaf
(
dptchadm,
ptchdate,
ptchtime
);
revoke all on patchxaf from public ; 
grant select on patchxaf to public ; 
