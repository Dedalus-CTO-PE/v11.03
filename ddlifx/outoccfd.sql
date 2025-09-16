create table outoccaf
(
occsite     char(6),
occgrup     char(3),
occtype     char(6),
occdate     char(6),
occnumb     decimal(8,0),
occspar     char(20),
lf          char(1)
);
create unique index outocca1 on outoccaf
(
occsite,
occgrup,
occtype,
occdate
);
revoke all on outoccaf from public ; 
grant select on outoccaf to public ; 
