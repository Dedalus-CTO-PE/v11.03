create table hicefpaf
(
  hcepprun    varchar2(3) default ' ' not null,
  hcepcntr    varchar2(5) default ' ' not null,
  hceppyee    varchar2(10) default ' ' not null,
  hcepnclm    number(2,0) default 0 not null,
  hcepbsbn    number(6,0) default 0 not null,
  hcepaccn    number(9,0) default 0 not null,
  hcepanam    varchar2(32) default ' ' not null,
  hcepdamt    number(14,2) default 0 not null,
  hcepspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicefpa1 primary key( 
hceppyee,
hcepprun,
hcepcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
