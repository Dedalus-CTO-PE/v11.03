create table fmsbnkaf
(
  fmbnbnk     varchar2(15) default ' ' not null,
  fmbnunq     varchar2(5) default ' ' not null,
  fmbnref     varchar2(15) default ' ' not null,
  fmbnled     varchar2(2) default ' ' not null,
  fmbnacc     varchar2(12) default ' ' not null,
  fmbndat     varchar2(8) default ' ' not null,
  fmbntyp     varchar2(1) default ' ' not null,
  fmbnpre     varchar2(1) default ' ' not null,
  fmbnpdt     varchar2(8) default ' ' not null,
  fmbnamt     number(14,2) default 0 not null,
  fmbnfyr     varchar2(4) default ' ' not null,
  fmbnbch     varchar2(5) default ' ' not null,
  fmbnlno     varchar2(5) default ' ' not null,
  fmbncre     varchar2(5) default ' ' not null,
  fmbnnam     varchar2(35) default ' ' not null,
  fmbnspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsbnka1 primary key( 
fmbnbnk,
fmbnunq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsbnka2 on fmsbnkaf
(
fmbnbnk,
fmbntyp,
fmbnref,
fmbnunq
)
  tablespace pas_indx; 
create unique index fmsbnka3 on fmsbnkaf
(
fmbnbnk,
fmbntyp,
fmbndat,
fmbnref,
fmbnunq
)
  tablespace pas_indx; 
create unique index fmsbnka4 on fmsbnkaf
(
fmbnbch,
fmbnlno,
fmbnbnk,
fmbnunq
)
  tablespace pas_indx; 
create unique index fmsbnka5 on fmsbnkaf
(
fmbnbnk,
fmbntyp,
fmbnnam,
fmbnunq
)
  tablespace pas_indx; 
create  index fmsbnka6 on fmsbnkaf
(
fmbnbnk,
fmbnpre,
fmbnpdt
)
  tablespace pas_indx; 
