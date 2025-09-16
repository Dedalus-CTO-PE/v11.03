create table pattcoaf
(
ptcocode    varchar2(6),
ptcotcom    varchar2(3),
ptcolnum    varchar2(3),
ptcocomm    varchar2(70),
ptcooper    varchar2(4),
ptcodcre    varchar2(8),
ptcolmod    varchar2(8),
ptcotmod    varchar2(8),
ptcomope    varchar2(4),
ptcospar    varchar2(30),
lf          varchar2(1),
constraint pattcoa1 primary key( 
ptcocode,
ptcotcom,
ptcolnum)
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
create public synonym pattcoaf for pattcoaf;
