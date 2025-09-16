create table watnbraf
(
wtnburno    varchar2(8),
wtnbcode    varchar2(9),
wtnbcnt     varchar2(2),
wtnbedat    varchar2(8),
wtnbetim    varchar2(8),
wtnbrtyp    varchar2(1),
wtnbrsfl    varchar2(1),
wtnbbnum    varchar2(8),
wtnbudf1    varchar2(3),
wtnbudf2    varchar2(3),
wtnbudf3    varchar2(3),
wtnbudf4    varchar2(3),
wtnbudf5    varchar2(3),
wtnbudf6    varchar2(3),
wtnbudf7    varchar2(3),
wtnbudf8    varchar2(3),
wtnbdrsa    varchar2(8),
wtnbdosa    varchar2(8),
wtnbphsp    varchar2(3),
wtnbtrag    varchar2(4),
wtnbpchs    varchar2(3),
wtnbbpro    varchar2(2),
wtnbdtec    varchar2(8),
wtnbspfl    varchar2(3),
wtnbspar    varchar2(80),
lf          varchar2(1),
constraint watnbra1 primary key( 
wtnbrsfl,
wtnburno,
wtnbcode,
wtnbcnt,
wtnbedat,
wtnbetim)
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
create public synonym watnbraf for watnbraf;
create unique index watnbra2 on watnbraf
(
wtnburno,
wtnbcode,
wtnbcnt,
wtnbedat,
wtnbetim
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
