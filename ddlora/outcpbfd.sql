create table outcpbaf
(
  otpbsite    varchar2(6) default ' ' not null,
  otpbctyp    varchar2(6) default ' ' not null,
  otpbprob    varchar2(9) default ' ' not null,
  otpbdesc    varchar2(70) default ' ' not null,
  otpbicdc    varchar2(9) default ' ' not null,
  otpbactv    varchar2(1) default ' ' not null,
  otpbcdat    varchar2(8) default ' ' not null,
  otpbctim    varchar2(8) default ' ' not null,
  otpbcuid    varchar2(10) default ' ' not null,
  otpbudat    varchar2(8) default ' ' not null,
  otpbutim    varchar2(8) default ' ' not null,
  otpbuuid    varchar2(10) default ' ' not null,
  otpbspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outcpba1 primary key( 
otpbsite,
otpbctyp,
otpbprob)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outcpba2 on outcpbaf
(
otpbsite,
otpbctyp,
otpbdesc,
otpbprob
)
  tablespace pas_indx; 
