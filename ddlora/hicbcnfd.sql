create table hicbcnaf
(
  hcbcpmci    varchar2(8) default ' ' not null,
  hcbcpyee    varchar2(10) default ' ' not null,
  hcbcpsrv    varchar2(10) default ' ' not null,
  hcbcbtch    varchar2(5) default ' ' not null,
  hcbcbcnt    number(3,0) default 0 not null,
  hcbcstat    varchar2(1) default ' ' not null,
  hcbccdat    varchar2(8) default ' ' not null,
  hcbcctim    varchar2(8) default ' ' not null,
  hcbccuid    varchar2(10) default ' ' not null,
  hcbcudat    varchar2(8) default ' ' not null,
  hcbcutim    varchar2(8) default ' ' not null,
  hcbcuuid    varchar2(10) default ' ' not null,
  hcbcspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicbcna1 primary key( 
hcbcpmci,
hcbcpyee,
hcbcpsrv,
hcbcbtch)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicbcna2 on hicbcnaf
(
hcbcbtch,
hcbcpmci,
hcbcpyee,
hcbcpsrv
)
  tablespace pas_indx; 
