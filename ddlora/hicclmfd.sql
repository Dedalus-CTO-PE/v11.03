create table hicclmaf
(
  hcclclmn    varchar2(8) default ' ' not null,
  hcclstat    varchar2(2) default ' ' not null,
  hcclbtch    varchar2(5) default ' ' not null,
  hcclvisn    varchar2(8) default ' ' not null,
  hcclvtyp    number(2,0) default 0 not null,
  hcclurno    varchar2(8) default ' ' not null,
  hcclpmci    varchar2(8) default ' ' not null,
  hcclpyee    varchar2(10) default ' ' not null,
  hcclpsrv    varchar2(10) default ' ' not null,
  hcclmpra    varchar2(6) default ' ' not null,
  hccldate    varchar2(8) default ' ' not null,
  hccladoc    varchar2(10) default ' ' not null,
  hcclsite    varchar2(6) default ' ' not null,
  hcclctyp    varchar2(6) default ' ' not null,
  hcclclid    varchar2(6) default ' ' not null,
  hcclpind    varchar2(3) default ' ' not null,
  hcclmitm    number(1,0) default 0 not null,
  hcclsent    varchar2(8) default ' ' not null,
  hcclrecp    varchar2(8) default ' ' not null,
  hcclpbat    varchar2(8) default ' ' not null,
  hcclnbat    varchar2(8) default ' ' not null,
  hcclcamn    number(14,2) default 0 not null,
  hcclrcva    number(14,2) default 0 not null,
  hcclreja    number(14,2) default 0 not null,
  hcclwoff    number(14,2) default 0 not null,
  hccltrin    number(14,2) default 0 not null,
  hccladjm    number(14,2) default 0 not null,
  hcclcdat    varchar2(8) default ' ' not null,
  hcclctim    varchar2(8) default ' ' not null,
  hcclcuid    varchar2(10) default ' ' not null,
  hccludat    varchar2(8) default ' ' not null,
  hcclutim    varchar2(8) default ' ' not null,
  hccluuid    varchar2(10) default ' ' not null,
  hcclvpos    varchar2(2) default ' ' not null,
  hcclpnum    varchar2(5) default ' ' not null,
  hcclspar    varchar2(45) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicclma1 primary key( 
hcclclmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicclma2 on hicclmaf
(
hcclvisn,
hcclclmn
)
  tablespace pas_indx; 
create unique index hicclma3 on hicclmaf
(
hcclurno,
hcclclmn
)
  tablespace pas_indx; 
create unique index hicclma4 on hicclmaf
(
hcclpsrv,
hccldate,
hcclclmn
)
  tablespace pas_indx; 
create unique index hicclma5 on hicclmaf
(
hcclsite,
hcclctyp,
hccldate,
hcclclmn
)
  tablespace pas_indx; 
create unique index hicclma6 on hicclmaf
(
hcclsite,
hcclclid,
hccldate,
hcclclmn
)
  tablespace pas_indx; 
create unique index hicclma7 on hicclmaf
(
hcclbtch,
hcclvpos,
hcclclmn
)
  tablespace pas_indx; 
create unique index hicclma8 on hicclmaf
(
hcclstat,
hccldate,
hcclclmn
)
  tablespace pas_indx; 
