create table watphiaf
(
  wtphproc    varchar2(9) default ' ' not null,
  wtphefdt    varchar2(8) default ' ' not null,
  wtphhdpv    varchar2(9) default ' ' not null,
  wtphdrgc    varchar2(6) default ' ' not null,
  wtphrhat    varchar2(6) default ' ' not null,
  wtphchet    varchar2(6) default ' ' not null,
  wtphspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watphia1 primary key( 
wtphproc,
wtphefdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
