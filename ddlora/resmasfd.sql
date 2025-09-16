create table resmasaf
(
remadat     varchar2(8),
rematim     varchar2(5),
remauni     varchar2(4),
remaurn     varchar2(8),
remavis     varchar2(8),
remadoc     varchar2(6),
remawrd     varchar2(3),
rematem     varchar2(3),
remadrn     varchar2(1),
remawrn     varchar2(1),
rematmn     varchar2(1),
remaicn     varchar2(3),
remanrm     varchar2(1),
remade1     varchar2(80),
remade2     varchar2(80),
remade3     varchar2(80),
rematyp     varchar2(3),
remalty     number(2,0),
remaurl     varchar2(127),
remaprg     varchar2(8),
remarep     varchar2(2),
rematmp     varchar2(3),
remaspa     varchar2(60),
lf          varchar2(1),
constraint resmasa1 primary key( 
remadat,
rematim,
remauni)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym resmasaf for resmasaf;
create unique index resmasa2 on resmasaf
(
remaurn,
remadat,
rematim,
remauni
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index resmasa3 on resmasaf
(
remavis,
remadat,
rematim,
remauni
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index resmasa4 on resmasaf
(
remadoc,
remadat,
rematim,
remauni
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index resmasa5 on resmasaf
(
rematem,
remadat,
rematim,
remauni
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index resmasa6 on resmasaf
(
remawrd,
remadat,
rematim,
remauni
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
