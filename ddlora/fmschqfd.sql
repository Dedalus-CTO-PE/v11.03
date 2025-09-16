create table fmschqaf
(
  fmchchq     varchar2(15) default ' ' not null,
  fmchdes     varchar2(40) default ' ' not null,
  fmchbal     number(14,2) default 0 not null,
  fmchbdt     varchar2(8) default ' ' not null,
  fmchfmt     number(2,0) default 0 not null,
  fmchbsb     varchar2(6) default ' ' not null,
  fmchacct    varchar2(9) default ' ' not null,
  fmchnzac    varchar2(16) default ' ' not null,
  fmchdesc    varchar2(35) default ' ' not null,
  fmchadd1    varchar2(25) default ' ' not null,
  fmchadd2    varchar2(25) default ' ' not null,
  fmchadd3    varchar2(20) default ' ' not null,
  fmchadd4    varchar2(4) default ' ' not null,
  fmchfrmt    varchar2(1) default ' ' not null,
  fmchbnam    varchar2(3) default ' ' not null,
  fmchuser    varchar2(6) default ' ' not null,
  fmchedsc    varchar2(12) default ' ' not null,
  fmchdfrm    number(1,0) default 0 not null,
  fmchur1     varchar2(25) default ' ' not null,
  fmchur2     varchar2(25) default ' ' not null,
  fmchud1     varchar2(8) default ' ' not null,
  fmchud2     varchar2(8) default ' ' not null,
  fmchuy1     varchar2(1) default ' ' not null,
  fmchuy2     varchar2(1) default ' ' not null,
  fmchspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmschqa1 primary key( 
fmchchq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
