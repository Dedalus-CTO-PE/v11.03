create table fmsprcaf
(
  fmprcode    varchar2(3) default ' ' not null,
  fmprdesc    varchar2(20) default ' ' not null,
  fmprpt1b    varchar2(3) default ' ' not null,
  fmprpt2b    varchar2(3) default ' ' not null,
  fmprpt3b    varchar2(3) default ' ' not null,
  fmprpt1a    varchar2(3) default ' ' not null,
  fmprpt2a    varchar2(3) default ' ' not null,
  fmprpt3a    varchar2(3) default ' ' not null,
  fmprundl    number(1,0) default 0 not null,
  fmprundc    varchar2(1) default ' ' not null,
  fmprblin    number(1,0) default 0 not null,
  fmpralin    number(1,0) default 0 not null,
  fmprbold    number(1,0) default 0 not null,
  fmprsupp    varchar2(1) default ' ' not null,
  fmprspar    varchar2(41) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsprca1 primary key( 
fmprcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
