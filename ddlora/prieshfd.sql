create table prieshaf
(
  prshfbid    varchar2(3) default ' ' not null,
  prsharid    varchar2(20) default ' ' not null,
  prshclid    varchar2(6) default ' ' not null,
  prshrptc    varchar2(3) default ' ' not null,
  prshitmn    varchar2(5) default ' ' not null,
  prshsrvc    varchar2(3) default ' ' not null,
  prshcamt    varchar2(9) default ' ' not null,
  prshfbam    varchar2(9) default ' ' not null,
  prshsdte    varchar2(8) default ' ' not null,
  prshmbam    varchar2(9) default ' ' not null,
  prshmexc    varchar2(3) default ' ' not null,
  prshschf    varchar2(9) default ' ' not null,
  prshsfac    varchar2(1) default ' ' not null,
  prshsvid    varchar2(4) default ' ' not null,
  prshspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priesha1 primary key( 
prshfbid,
prsharid,
prshclid,
prshrptc,
prshitmn,
prshsrvc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
