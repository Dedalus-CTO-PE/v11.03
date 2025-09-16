create table patafeaf
(
  ptfeclmn    varchar2(3) default ' ' not null,
  ptfehfnd    varchar2(6) default ' ' not null,
  ptfetabt    varchar2(3) default ' ' not null,
  ptfecasm    varchar2(9) default ' ' not null,
  ptfebtyp    varchar2(3) default ' ' not null,
  dptfeeda    varchar2(4) default ' ' not null,
  ptfedes1    varchar2(30) default ' ' not null,
  ptfedes2    varchar2(35) default ' ' not null,
  ptfedreb    number(14,2) default 0 not null,
  ptfedpat    number(14,2) default 0 not null,
  ptfeacin    varchar2(1) default ' ' not null,
  ptfecnid    varchar2(6) default ' ' not null,
  ptfefigr    varchar2(3) default ' ' not null,
  ptfenpdy    varchar2(1) default ' ' not null,
  ptfespar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patafea1 primary key( 
ptfecnid,
ptfeclmn,
ptfehfnd,
ptfetabt,
ptfecasm,
ptfebtyp,
dptfeeda)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
