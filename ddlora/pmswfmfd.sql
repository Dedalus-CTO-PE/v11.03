create table pmswfmaf
(
  pmwffldn    varchar2(5) default ' ' not null,
  pmwfides    varchar2(35) default ' ' not null,
  pmwfsdes    varchar2(35) default ' ' not null,
  pmwfscde    varchar2(35) default ' ' not null,
  pmwfmand    varchar2(1) default ' ' not null,
  pmwfspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmswfma1 primary key( 
pmwffldn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmswfma2 on pmswfmaf
(
pmwfmand,
pmwffldn
)
  tablespace pas_indx; 
