create table mehplsaf
(
  mhpsxdat    char(8) default ' ' not null,
  mhpsxnum    char(3) default ' ' not null,
  mhpsvisn    char(8) default ' ' not null,
  mhpsuniq    char(3) default ' ' not null,
  mhpsurno    char(8) default ' ' not null,
  mhpsstat    char(1) default ' ' not null,
  mhpsetyp    char(1) default ' ' not null,
  mhpsecnt    char(3) default ' ' not null,
  mhpswcnt    char(3) default ' ' not null,
  mhpserid    char(9) default ' ' not null,
  mhpsfver    char(3) default ' ' not null,
  mhpslsid    char(20) default ' ' not null,
  mhpssorg    char(8) default ' ' not null,
  mhpsorid    char(8) default ' ' not null,
  mhpsfdat    char(19) default ' ' not null,
  mhpstdat    char(19) default ' ' not null,
  mhpsdelt    char(7) default ' ' not null,
  mhpsotyp    char(3) default ' ' not null,
  mhpsehcu    char(8) default ' ' not null,
  mhpspsex    char(1) default ' ' not null,
  mhpspdob    char(10) default ' ' not null,
  mhpslscd    char(2) default ' ' not null,
  mhpsrcpn    char(6) default ' ' not null,
  mhpssdat    char(19) default ' ' not null,
  mhpsedat    char(19) default ' ' not null,
  mhpsspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index mehplsa1 on mehplsaf
(
mhpsxdat,
mhpsxnum,
mhpsvisn,
mhpsuniq
);
create unique index mehplsa2 on mehplsaf
(
mhpsvisn,
mhpsxdat,
mhpsxnum,
mhpsuniq
);
create unique index mehplsa3 on mehplsaf
(
mhpsurno,
mhpsxdat,
mhpsxnum,
mhpsvisn,
mhpsuniq
);
revoke all on mehplsaf from public ; 
grant select on mehplsaf to public ; 
