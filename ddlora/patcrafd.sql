create table patcraaf
(
  ptcrrcpn    varchar2(12) default ' ' not null,
  dptcradm    varchar2(8) default ' ' not null,
  ptcrinvn    varchar2(8) default ' ' not null,
  dptcrtra    varchar2(6) default ' ' not null,
  ptcrdate    varchar2(8) default ' ' not null,
  ptcrport    varchar2(2) default ' ' not null,
  ptcroper    varchar2(4) default ' ' not null,
  ptcrspar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcraa1 primary key( 
ptcrrcpn,
dptcradm,
ptcrinvn,
dptcrtra)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcraa2 on patcraaf
(
ptcrdate,
ptcrrcpn,
dptcradm,
ptcrinvn,
dptcrtra
)
  tablespace pas_indx; 
