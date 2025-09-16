create table prifmsaf
(
dprfmsub    char(1),
prfmcod     char(17),
prfmidi     char(5),
prfmire     char(4),
prfmild     char(2),
prfmica     char(12),
prfmida     char(12),
prfmigs     char(12),
prfmtdi     char(5),
prfmtre     char(4),
prfmtld     char(2),
prfmtca     char(12),
prfmtda     char(12),
prfmbasc    char(3),
prfmspa     char(15),
lf          char(1)
);
create unique index prifmsa1 on prifmsaf
(
dprfmsub,
prfmcod
);
revoke all on prifmsaf from public ; 
grant select on prifmsaf to public ; 
