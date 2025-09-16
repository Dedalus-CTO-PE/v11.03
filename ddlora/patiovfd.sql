create table patiovaf
(
  ptiocode    varchar2(3) default ' ' not null,
  ptiofund    varchar2(6) default ' ' not null,
  ptiotblt    varchar2(3) default ' ' not null,
  ptiocscd    varchar2(9) default ' ' not null,
  ptiobrcd    varchar2(3) default ' ' not null,
  ptioamnt    number(14,2) default 0 not null,
  ptiocnid    varchar2(6) default ' ' not null,
  ptiospre    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patiova1 primary key( 
ptiocnid,
ptiocode,
ptiofund,
ptiotblt,
ptiocscd,
ptiobrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
