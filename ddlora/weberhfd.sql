create table weberhaf
(
  wbeihosp    varchar2(3) default ' ' not null,
  wbeiftid    varchar2(24) default ' ' not null,
  wbeiradv    varchar2(30) default ' ' not null,
  wbeipnum    varchar2(4) default ' ' not null,
  wbeiptot    varchar2(4) default ' ' not null,
  wbeidate    varchar2(8) default ' ' not null,
  wbeiname    varchar2(40) default ' ' not null,
  wbeiplid    varchar2(8) default ' ' not null,
  wbeibnum    varchar2(9) default ' ' not null,
  wbeibnam    varchar2(30) default ' ' not null,
  wbeibbsb    varchar2(6) default ' ' not null,
  wbeipref    varchar2(30) default ' ' not null,
  wbeidamt    varchar2(9) default ' ' not null,
  wbeistat    varchar2(1) default ' ' not null,
  wbeimsid    varchar2(36) default ' ' not null,
  wbeirsta    varchar2(40) default ' ' not null,
  wbeispar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint weberha1 primary key( 
wbeihosp,
wbeiftid,
wbeiradv,
wbeipnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index weberha2 on weberhaf
(
wbeihosp,
wbeidate,
wbeiftid,
wbeiradv,
wbeipnum
)
  tablespace pas_indx; 
create unique index weberha3 on weberhaf
(
wbeihosp,
wbeistat,
wbeidate,
wbeiftid,
wbeiradv,
wbeipnum
)
  tablespace pas_indx; 
create unique index weberha4 on weberhaf
(
wbeiftid,
wbeiradv,
wbeipnum,
wbeihosp
)
  tablespace pas_indx; 
