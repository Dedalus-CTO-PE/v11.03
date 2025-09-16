create table pmsoecaf
(
  pmoevisn    varchar2(8) default ' ' not null,
  pmoecntr    varchar2(3) default ' ' not null,
  pmoestat    varchar2(2) default ' ' not null,
  pmoeurno    varchar2(8) default ' ' not null,
  pmoearid    varchar2(20) default ' ' not null,
  pmoetrid    varchar2(24) default ' ' not null,
  pmoerqdt    varchar2(8) default ' ' not null,
  pmoeetyp    varchar2(2) default ' ' not null,
  pmoeerrc    varchar2(4) default ' ' not null,
  pmoeerrd    varchar2(100) default ' ' not null,
  pmoecdte    varchar2(8) default ' ' not null,
  pmoectim    varchar2(8) default ' ' not null,
  pmoeudte    varchar2(8) default ' ' not null,
  pmoeutim    varchar2(8) default ' ' not null,
  pmoehosp    varchar2(3) default ' ' not null,
  pmoeeleg    varchar2(8) default ' ' not null,
  pmoespar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsoeca1 primary key( 
pmoevisn,
pmoecntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsoeca2 on pmsoecaf
(
pmoestat,
pmoehosp,
pmoevisn,
pmoecntr
)
  tablespace pas_indx; 
