create table opreqpaf
(
  opeqcode    varchar2(15) default ' ' not null,
  opeqdesc    varchar2(50) default ' ' not null,
  opeqtype    varchar2(3) default ' ' not null,
  opequniq    varchar2(10) default ' ' not null,
  opeqteam    varchar2(1) default ' ' not null,
  opeqstat    varchar2(3) default ' ' not null,
  opeqdtsc    varchar2(8) default ' ' not null,
  opequslo    varchar2(15) default ' ' not null,
  opeqculo    varchar2(15) default ' ' not null,
  opeqde1u    varchar2(8) default ' ' not null,
  opeqmnou    varchar2(5) default ' ' not null,
  opeqeedt    varchar2(8) default ' ' not null,
  opeqnour    varchar2(5) default ' ' not null,
  opeqlsdt    varchar2(8) default ' ' not null,
  opequlst    varchar2(5) default ' ' not null,
  opeqlmdt    varchar2(8) default ' ' not null,
  opequlmt    varchar2(5) default ' ' not null,
  opeqsrno    varchar2(15) default ' ' not null,
  opeqspno    varchar2(15) default ' ' not null,
  opeqspdt    varchar2(50) default ' ' not null,
  opeqnote    varchar2(50) default ' ' not null,
  opequdt1    varchar2(50) default ' ' not null,
  opequdt2    varchar2(50) default ' ' not null,
  opequdf1    varchar2(3) default ' ' not null,
  opequdf2    varchar2(3) default ' ' not null,
  opeqdte1    varchar2(8) default ' ' not null,
  opeqdte2    varchar2(8) default ' ' not null,
  opeqtme1    varchar2(8) default ' ' not null,
  opeqtme2    varchar2(8) default ' ' not null,
  opeqactv    varchar2(1) default ' ' not null,
  opeqhosp    varchar2(3) default ' ' not null,
  opeqspar    varchar2(46) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint opreqpa1 primary key( 
opeqcode,
opeqhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index opreqpa2 on opreqpaf
(
opeqdesc,
opeqcode,
opeqhosp
)
  tablespace pas_indx; 
create unique index opreqpa3 on opreqpaf
(
opequniq,
opeqteam,
opeqcode,
opeqhosp
)
  tablespace pas_indx; 
create unique index opreqpa4 on opreqpaf
(
opeqeedt,
opeqcode,
opeqhosp
)
  tablespace pas_indx; 
