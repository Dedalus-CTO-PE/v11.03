create table outprcaf
(
  otproutn    varchar2(8) default ' ' not null,
  otprcode    varchar2(9) default ' ' not null,
  otprdesc    varchar2(70) default ' ' not null,
  otprcod2    varchar2(9) default ' ' not null,
  otprdes2    varchar2(70) default ' ' not null,
  otprcod3    varchar2(9) default ' ' not null,
  otprdes3    varchar2(70) default ' ' not null,
  otprcod4    varchar2(9) default ' ' not null,
  otprdes4    varchar2(70) default ' ' not null,
  otprcod5    varchar2(9) default ' ' not null,
  otprdes5    varchar2(70) default ' ' not null,
  otprprb1    varchar2(9) default ' ' not null,
  otprprb2    varchar2(9) default ' ' not null,
  otprprb3    varchar2(9) default ' ' not null,
  otprspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outprca1 primary key( 
otproutn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
