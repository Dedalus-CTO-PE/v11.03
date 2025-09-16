create table patcmxaf
(
  ptcmclmn    varchar2(3) default ' ' not null,
  ptcmhfnd    varchar2(6) default ' ' not null,
  ptcmcasm    varchar2(9) default ' ' not null,
  ptcmxlos    number(4,0) default 0 not null,
  ptcmdifg    number(1,0) default 0 not null,
  ptcmcnid    varchar2(6) default ' ' not null,
  ptcmeceq    varchar2(11) default ' ' not null,
  ptcmects    varchar2(2) default ' ' not null,
  ptcmtrpt    varchar2(3) default ' ' not null,
  ptcmtlos    number(4,0) default 0 not null,
  ptcmehcp    varchar2(2) default ' ' not null,
  ptcmspar    varchar2(45) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcmxa1 primary key( 
ptcmclmn,
ptcmhfnd,
ptcmcasm,
ptcmcnid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcmxa2 on patcmxaf
(
ptcmcnid,
ptcmclmn,
ptcmhfnd,
ptcmcasm
)
  tablespace pas_indx; 
