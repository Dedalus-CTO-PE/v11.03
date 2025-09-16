create table pmsfenaf
(
pmfnquot    varchar2(12),
pmfntitl    varchar2(4),
pmfnsnam    varchar2(20),
pmfngnam    varchar2(25),
pmfnadd1    varchar2(25),
pmfnadd2    varchar2(25),
pmfnsubr    varchar2(15),
pmfnpost    varchar2(4),
pmfnbdat    varchar2(8),
pmfnphon    varchar2(20),
pmfnspar    varchar2(2),
lf          varchar2(1),
constraint pmsfena1 primary key( 
pmfnquot)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsfenaf for pmsfenaf;
create unique index pmsfena2 on pmsfenaf
(
pmfnsnam,
pmfnquot
)
  tablespace pas_indx; 
