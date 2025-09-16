create table mehplsaf
(
  mhpsxdat    varchar2(8) default ' ' not null,
  mhpsxnum    varchar2(3) default ' ' not null,
  mhpsvisn    varchar2(8) default ' ' not null,
  mhpsuniq    varchar2(3) default ' ' not null,
  mhpsurno    varchar2(8) default ' ' not null,
  mhpsstat    varchar2(1) default ' ' not null,
  mhpsetyp    varchar2(1) default ' ' not null,
  mhpsecnt    varchar2(3) default ' ' not null,
  mhpswcnt    varchar2(3) default ' ' not null,
  mhpserid    varchar2(9) default ' ' not null,
  mhpsfver    varchar2(3) default ' ' not null,
  mhpslsid    varchar2(20) default ' ' not null,
  mhpssorg    varchar2(8) default ' ' not null,
  mhpsorid    varchar2(8) default ' ' not null,
  mhpsfdat    varchar2(19) default ' ' not null,
  mhpstdat    varchar2(19) default ' ' not null,
  mhpsdelt    varchar2(7) default ' ' not null,
  mhpsotyp    varchar2(3) default ' ' not null,
  mhpsehcu    varchar2(8) default ' ' not null,
  mhpspsex    varchar2(1) default ' ' not null,
  mhpspdob    varchar2(10) default ' ' not null,
  mhpslscd    varchar2(2) default ' ' not null,
  mhpsrcpn    varchar2(6) default ' ' not null,
  mhpssdat    varchar2(19) default ' ' not null,
  mhpsedat    varchar2(19) default ' ' not null,
  mhpsspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehplsa1 primary key( 
mhpsxdat,
mhpsxnum,
mhpsvisn,
mhpsuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mehplsa2 on mehplsaf
(
mhpsvisn,
mhpsxdat,
mhpsxnum,
mhpsuniq
)
  tablespace pas_indx; 
create unique index mehplsa3 on mehplsaf
(
mhpsurno,
mhpsxdat,
mhpsxnum,
mhpsvisn,
mhpsuniq
)
  tablespace pas_indx; 
