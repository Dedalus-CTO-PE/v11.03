create table reshebaf
(
rehbrdt     char(8),
rehbrtm     char(5),
rehbrun     char(4),
rehblin     char(3),
rehbtxt     char(127),
rehbspa     char(10),
lf          char(1)
);
create unique index resheba1 on reshebaf
(
rehbrdt,
rehbrtm,
rehbrun,
rehblin
);
revoke all on reshebaf from public ; 
grant select on reshebaf to public ; 
