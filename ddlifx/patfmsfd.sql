create table patfmsaf
(
ptfmsub     char(1),
ptfmcod     char(13),
ptfmidi     char(5),
ptfmire     char(4),
ptfmild     char(2),
ptfmica     char(12),
ptfmida     char(12),
ptfmigs     char(12),
ptfmtdi     char(5),
ptfmtre     char(4),
ptfmtld     char(2),
ptfmtca     char(12),
ptfmtda     char(12),
ptfmbasc    char(3),
ptfmhosp    char(3),
ptfmspa     char(11),
lf          char(1)
);
create unique index patfmsa1 on patfmsaf
(
ptfmhosp,
ptfmsub,
ptfmcod
);
revoke all on patfmsaf from public ; 
grant select on patfmsaf to public ; 
