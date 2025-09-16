create table pmsfesaf
(
pmfsquot    varchar2(12),
dpmfsuni    varchar2(5),
pmfsurno    varchar2(8),
pmfsrect    varchar2(1),
pmfslumh    number(14,2),
pmfslumf    number(14,2),
pmfsdafr    number(5,0),
pmfsdayt    number(5,0),
pmfsdayh    number(14,2),
pmfsdahf    number(14,2),
pmfsthit    varchar2(9),
pmfstheh    number(14,2),
pmfsthef    number(14,2),
pmfsquan    number(3,0),
pmfsbtyp    varchar2(3),
pmfsgsta    number(14,2),
pmfsgstp    varchar2(1),
pmfsgstc    varchar2(6),
pmfsspar    varchar2(30),
lf          varchar2(1),
constraint pmsfesa1 primary key( 
pmfsquot,
dpmfsuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsfesaf for pmsfesaf;
create unique index pmsfesa2 on pmsfesaf
(
pmfsquot,
pmfsrect,
dpmfsuni
)
  tablespace pas_indx; 
